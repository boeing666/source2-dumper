#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xBB0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xBB8, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xBBC, size 0x1, align 255
    char _pad_0BBD[0x3]; // offset 0xBBD
    float32 m_flSpriteFramerate; // offset 0xBC0, size 0x4, align 4
    float32 m_flFrame; // offset 0xBC4, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xBC8, size 0x4, align 255
    char _pad_0BCC[0xC]; // offset 0xBCC
    uint32 m_nBrightness; // offset 0xBD8, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xBDC, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xBE0, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xBE4, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xBE8, size 0x1, align 1
    char _pad_0BE9[0x3]; // offset 0xBE9
    float32 m_flGlowProxySize; // offset 0xBEC, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xBF0, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xBF4, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xBF8, size 0x4, align 4
    float32 m_flStartScale; // offset 0xBFC, size 0x4, align 4
    float32 m_flDestScale; // offset 0xC00, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xC04, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xC08, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xC0C, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xC10, size 0x4, align 255
    char _pad_0C14[0xC]; // offset 0xC14
    int32 m_nSpriteWidth; // offset 0xC20, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xC24, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xC28, size 0x4, align 4
    char _pad_0C2C[0x4]; // offset 0xC2C
};
