#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xB08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xA88, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xA90, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xA94, size 0x1, align 255
    char _pad_0A95[0x3]; // offset 0xA95
    float32 m_flSpriteFramerate; // offset 0xA98, size 0x4, align 4
    float32 m_flFrame; // offset 0xA9C, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xAA0, size 0x4, align 255
    char _pad_0AA4[0xC]; // offset 0xAA4
    uint32 m_nBrightness; // offset 0xAB0, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xAB4, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xAB8, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xABC, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xAC0, size 0x1, align 1
    char _pad_0AC1[0x3]; // offset 0xAC1
    float32 m_flGlowProxySize; // offset 0xAC4, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xAC8, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xACC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xAD0, size 0x4, align 4
    float32 m_flStartScale; // offset 0xAD4, size 0x4, align 4
    float32 m_flDestScale; // offset 0xAD8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xADC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xAE0, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xAE4, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xAE8, size 0x4, align 255
    char _pad_0AEC[0xC]; // offset 0xAEC
    int32 m_nSpriteWidth; // offset 0xAF8, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xAFC, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xB00, size 0x4, align 4
    char _pad_0B04[0x4]; // offset 0xB04
};
