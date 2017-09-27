#version 120

//this is where we communicate data from the CPU
uniform float uTime;

//this is the data we get from the vertex shader
varying vec2 vPosition;

//this is our regular color
vec4 color;

void main(){
    
    //gl_FragCoord is a special coordinate that gives us the position of the pixel relative to the screen
    color = vec4(gl_FragCoord.x/1024.0, gl_FragCoord.y/768.0, (sin(uTime)+1.0)*0.5, 1.0);
    
    //turn it into a circle!
    if(distance(vec2(0.0, 0.0), vPosition) > 300.0){
        color = vec4(0.);
    }
    
    gl_FragColor = color;
}
