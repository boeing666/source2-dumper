#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xC90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xC10, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xC18, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xC1C, size 0x1, align 255
    char _pad_0C1D[0x3]; // offset 0xC1D
    float32 m_flSpriteFramerate; // offset 0xC20, size 0x4, align 4
    float32 m_flFrame; // offset 0xC24, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xC28, size 0x4, align 255
    char _pad_0C2C[0xC]; // offset 0xC2C
    uint32 m_nBrightness; // offset 0xC38, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xC3C, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xC40, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xC44, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xC48, size 0x1, align 1
    char _pad_0C49[0x3]; // offset 0xC49
    float32 m_flGlowProxySize; // offset 0xC4C, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xC50, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xC54, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xC58, size 0x4, align 4
    float32 m_flStartScale; // offset 0xC5C, size 0x4, align 4
    float32 m_flDestScale; // offset 0xC60, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xC64, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xC68, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xC6C, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xC70, size 0x4, align 255
    char _pad_0C74[0xC]; // offset 0xC74
    int32 m_nSpriteWidth; // offset 0xC80, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xC84, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xC88, size 0x4, align 4
    char _pad_0C8C[0x4]; // offset 0xC8C
};
