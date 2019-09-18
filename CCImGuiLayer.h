#pragma once
#include <cocos2d.h>
class ImGuiLayer : public cocos2d::Node
{
public:
    static ImGuiLayer* create();
    virtual bool init() override;
    virtual void visit(cocos2d::Renderer *renderer, const cocos2d::Mat4& parentTransform, uint32_t parentFlags) override;
    void onDraw();
private:
    cocos2d::CustomCommand _command;
};
