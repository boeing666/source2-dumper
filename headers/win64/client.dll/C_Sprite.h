#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0x1030, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xFB0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xFB8, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xFBC, size 0x1, align 255
    char _pad_0FBD[0x3]; // offset 0xFBD
    float32 m_flSpriteFramerate; // offset 0xFC0, size 0x4, align 4
    float32 m_flFrame; // offset 0xFC4, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xFC8, size 0x4, align 255
    char _pad_0FCC[0xC]; // offset 0xFCC
    uint32 m_nBrightness; // offset 0xFD8, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xFDC, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xFE0, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xFE4, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xFE8, size 0x1, align 1
    char _pad_0FE9[0x3]; // offset 0xFE9
    float32 m_flGlowProxySize; // offset 0xFEC, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xFF0, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xFF4, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xFF8, size 0x4, align 4
    float32 m_flStartScale; // offset 0xFFC, size 0x4, align 4
    float32 m_flDestScale; // offset 0x1000, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x1004, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x1008, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x100C, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x1010, size 0x4, align 255
    char _pad_1014[0xC]; // offset 0x1014
    int32 m_nSpriteWidth; // offset 0x1020, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x1024, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x1028, size 0x4, align 4
    char _pad_102C[0x4]; // offset 0x102C
};
