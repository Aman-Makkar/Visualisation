#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"
#include "C:/glew-2.1.0/include/GL/glew.h"
#include "glslprogram.h"
#include "C:/glm/glm/glm.hpp"
using glm::mat4;

class SceneBasic : public Scene
{
private:
    int width, height;
    GLuint vboHandles[2];
    GLuint vaoHandle;
    float angle, given_angle;
    mat4 rotationMatrix;
    GLSLProgram prog;
    vec3 vecB, vecD;

    mat4 model;
    mat4 view;
    mat4 projection;

    void readData(const char* fname);
    void CreateVBO();

    float positionData[108];
    float colorData[108];
    float linearr[6];
    float linecolor[6] = {0.3,0.5,1.0,1.0,1.0,0.0};
public:
    SceneBasic();
    void setMatrices();

    void initScene();
    void render();
    void resize(int, int);
    void update( float t );

    void cubeRotation(float vecbX, float vecbY, float vecbZ, float vecdX, float vecdY, float vecdZ, float alpha);
    void updateView(float eyeX, float eyeY, float eyeZ, float directX, float directY, float directZ);
    void defaultPosition();

    void printActiveUniforms(GLuint programHandle);
    void printActiveAttribs(GLuint programHandle);
};

#endif // SCENEBASIC_H
