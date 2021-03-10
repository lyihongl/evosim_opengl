#version 430 core
out vec4 FragColor;
  
in vec4 vertexColor; // the input variable from the vertex shader (same name and same type)  
in vec4 position;

float draw_circle(vec2 coord, float radius) {
    return step(length(coord), radius);
}

void main()
{
    //vec2 coord = coordTest.xy;
    //float circle=draw_circle(coord, 0.1);
    //vec4 color = vec4(vec3(circle), 1.0)*vertexColor;
    //if(color.x == 0){
    //    color.w = 0.0;
    //}
    //FragColor = vertexColor;
    //vertexColor.w = 0.0f;
    //vec4 color = vec4(0,0,0,0);
    FragColor = vec4(position.x*2, 0.3, 0.0, 1.0);
} 