#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x1098, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0x10A0, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0x10A4, size 0x1, align 255
    char _pad_10A5[0x3]; // offset 0x10A5
    float32 m_flSpriteFramerate; // offset 0x10A8, size 0x4, align 4
    float32 m_flFrame; // offset 0x10AC, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0x10B0, size 0x4, align 255
    char _pad_10B4[0xC]; // offset 0x10B4
    uint32 m_nBrightness; // offset 0x10C0, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0x10C4, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0x10C8, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0x10CC, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0x10D0, size 0x1, align 1
    char _pad_10D1[0x3]; // offset 0x10D1
    float32 m_flGlowProxySize; // offset 0x10D4, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x10D8, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0x10DC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x10E0, size 0x4, align 4
    float32 m_flStartScale; // offset 0x10E4, size 0x4, align 4
    float32 m_flDestScale; // offset 0x10E8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x10EC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x10F0, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x10F4, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x10F8, size 0x4, align 255
    char _pad_10FC[0xC]; // offset 0x10FC
    int32 m_nSpriteWidth; // offset 0x1108, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x110C, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x1110, size 0x4, align 4
    char _pad_1114[0x4]; // offset 0x1114
};
