#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xDE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xD68, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xD70, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xD74, size 0x1, align 255
    char _pad_0D75[0x3]; // offset 0xD75
    float32 m_flSpriteFramerate; // offset 0xD78, size 0x4, align 4
    float32 m_flFrame; // offset 0xD7C, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xD80, size 0x4, align 255
    char _pad_0D84[0xC]; // offset 0xD84
    uint32 m_nBrightness; // offset 0xD90, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xD94, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xD98, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xD9C, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xDA0, size 0x1, align 1
    char _pad_0DA1[0x3]; // offset 0xDA1
    float32 m_flGlowProxySize; // offset 0xDA4, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xDA8, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xDAC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xDB0, size 0x4, align 4
    float32 m_flStartScale; // offset 0xDB4, size 0x4, align 4
    float32 m_flDestScale; // offset 0xDB8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xDBC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xDC0, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xDC4, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xDC8, size 0x4, align 255
    char _pad_0DCC[0xC]; // offset 0xDCC
    int32 m_nSpriteWidth; // offset 0xDD8, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xDDC, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xDE0, size 0x4, align 4
    char _pad_0DE4[0x4]; // offset 0xDE4
};
