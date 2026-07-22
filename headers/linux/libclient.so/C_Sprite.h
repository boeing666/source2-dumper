#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xFB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xF38, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xF40, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xF44, size 0x1, align 255
    char _pad_0F45[0x3]; // offset 0xF45
    float32 m_flSpriteFramerate; // offset 0xF48, size 0x4, align 4
    float32 m_flFrame; // offset 0xF4C, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xF50, size 0x4, align 255
    char _pad_0F54[0xC]; // offset 0xF54
    uint32 m_nBrightness; // offset 0xF60, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xF64, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xF68, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xF6C, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xF70, size 0x1, align 1
    char _pad_0F71[0x3]; // offset 0xF71
    float32 m_flGlowProxySize; // offset 0xF74, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xF78, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xF7C, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xF80, size 0x4, align 4
    float32 m_flStartScale; // offset 0xF84, size 0x4, align 4
    float32 m_flDestScale; // offset 0xF88, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xF8C, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xF90, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xF94, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xF98, size 0x4, align 255
    char _pad_0F9C[0xC]; // offset 0xF9C
    int32 m_nSpriteWidth; // offset 0xFA8, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xFAC, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xFB0, size 0x4, align 4
    char _pad_0FB4[0x4]; // offset 0xFB4
};
