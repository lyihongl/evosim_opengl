#version 430 core
out vec4 FragColor;
  
in vec4 vertexColor; // the input variable from the vertex shader (same name and same type)  
in vec2 coordTest;

float draw_circle(vec2 coord, float radius) {
    return step(length(coord), radius);
}

void main()
{
    //vec2 coord = coordTest;
    //float circle=draw_circle(coord, 0.1);
    //vec3 color = vec3(circle);
    //if(color.x == 0){
    //    color = vec3(0.2f, 0.3f, 0.3f);
    //}
    //FragColor = vec4(color, 1.0);
    FragColor = vertexColor;
} 