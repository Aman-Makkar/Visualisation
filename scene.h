#ifndef SCENE_H
#define SCENE_H

class Scene
{
public:
    /**
      Load textures, initialize shaders, etc.
      */
    virtual void initScene() = 0;

    /**
      This is called prior to every frame.  Use this
      to update your animation.
      */
    virtual void update( float t ) = 0;

    /**
      Draw your scene.
      */
    virtual void render() = 0;

    /**
      Called when screen is resized
      */
    virtual void resize(int, int) = 0;

    virtual void updateView(float eyeX, float eyeY, float eyeZ, float directX, float directY, float directZ) = 0;

    virtual void cubeRotation(float vecbX, float vecbY, float vecbZ, float vecdX, float vecdY, float vecdZ, float alpha) = 0;

    virtual void defaultPosition() = 0;
};

#endif // SCENE_H
