#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <vector>
#include <functional>

namespace EvoSim {
struct VertexArray {
	std::size_t cols;
	std::vector<std::size_t> attribPoints;
	VertexArray(const std::size_t &cols, std::vector<std::size_t> &&attribPoints);
	std::vector<float> Vertices;
	const std::size_t GetRows();
	void PushRow(std::vector<float> &&row);
	std::size_t SizeBytes() const;
	const float *Data() const;
};
};	// namespace EvoSim

EvoSim::VertexArray::VertexArray(const std::size_t &cols, std::vector<std::size_t> &&attribPoints) : cols{cols} {
	attribPoints = std::move(attribPoints);
}
const std::size_t EvoSim::VertexArray::GetRows() {
	return Vertices.size() / cols;
}
void EvoSim::VertexArray::PushRow(std::vector<float> &&row) {
	if (row.size() != cols) {
		return;
	}
	//std::copy_if(std::make_move_iterator(row.begin()), std::make_move_iterator(row.end()), std::back_insert_iterator(Vertices), [] { return true; });
	for (auto it : row) {
		Vertices.push_back(it);
	}
}
std::size_t EvoSim::VertexArray::SizeBytes() const {
	return sizeof(float) * Vertices.size();
}
const float * EvoSim::VertexArray::Data() const {
	return Vertices.data();
}
#endif