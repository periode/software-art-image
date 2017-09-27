#version 120

uniform float uTime;
varying vec2 vPosition;
vec2 pos;
vec4 color;

void main(){
    
    
//    color = vec4(1.0, 0.0, 0.0, 1.0);
    color = vec4(gl_FragCoord.x/1024.0, gl_FragCoord.y/768.0, (sin(uTime)+1.0)*0.5, 1.0);
    
    if(distance(vec2(0.0, 0.0), vPosition) > 300.0){
        color = vec4(0.);
    }
    
    gl_FragColor = color;
}
