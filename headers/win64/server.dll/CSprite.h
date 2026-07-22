#pragma once

class CSprite : public CBaseModelEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x778, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedToEntity; // offset 0x780, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0x784, size 0x1, align 255
    char _pad_0785[0x3]; // offset 0x785
    float32 m_flSpriteFramerate; // offset 0x788, size 0x4, align 4
    float32 m_flFrame; // offset 0x78C, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0x790, size 0x4, align 255
    char _pad_0794[0xC]; // offset 0x794
    uint32 m_nBrightness; // offset 0x7A0, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0x7A4, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0x7A8, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0x7AC, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0x7B0, size 0x1, align 1
    char _pad_07B1[0x3]; // offset 0x7B1
    float32 m_flGlowProxySize; // offset 0x7B4, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x7B8, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0x7BC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x7C0, size 0x4, align 4
    float32 m_flStartScale; // offset 0x7C4, size 0x4, align 4
    float32 m_flDestScale; // offset 0x7C8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x7CC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x7D0, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x7D4, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x7D8, size 0x4, align 255
    int32 m_nSpriteWidth; // offset 0x7DC, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x7E0, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x7E4, size 0x4, align 4
};
