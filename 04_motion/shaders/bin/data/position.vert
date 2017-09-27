#version 120

// this is where we get data from outside the GPU
// check the 'shader.setUniform1f("uTime", ofGetElapsedTimef()' call in draw() in ofApp.cpp
uniform float uTime;

//this is our regular way of declaring a variable. position is 4-dimensional because it includes also matrix information (which you don't need to worry about)
vec4 position;

//a varying variable is a variable that will be passed on to the fragment shader
//(this is why there is an identical declaration in the fragment shader)
varying vec2 vPosition;


//a shader always has a main() function
void main(){
    
    //we store the vertex position that is given to us by gl_Vertex so that we can then modify it
    position = gl_Vertex;
    
    //we store the x and y components into vPosition
    vPosition = position.xy;
    
    //finally, we always need to set gl_Position
    //and it will always be multiplied by gl_ModelViewProjectionMatrix (i.e. our camera)
    gl_Position = gl_ModelViewProjectionMatrix * position;
}
