#version 120

uniform float uTime;

vec4 position;

varying vec2 vPosition;

void main(){
    position = gl_Vertex;
    
//    position.y = gl_Vertex.y + sin(uTime+mod(gl_Vertex.x, 3))*10.0;
    
    vPosition = position.xy;
    
    gl_Position = gl_ModelViewProjectionMatrix * position;
}
