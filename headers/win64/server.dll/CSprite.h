#pragma once

class CSprite : public CBaseModelEntity /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x8B8, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedToEntity; // offset 0x8C0, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0x8C4, size 0x1, align 255
    char _pad_08C5[0x3]; // offset 0x8C5
    float32 m_flSpriteFramerate; // offset 0x8C8, size 0x4, align 4
    float32 m_flFrame; // offset 0x8CC, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0x8D0, size 0x4, align 255
    char _pad_08D4[0xC]; // offset 0x8D4
    uint32 m_nBrightness; // offset 0x8E0, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0x8E4, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0x8E8, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0x8EC, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0x8F0, size 0x1, align 1
    char _pad_08F1[0x3]; // offset 0x8F1
    float32 m_flGlowProxySize; // offset 0x8F4, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x8F8, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0x8FC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x900, size 0x4, align 4
    float32 m_flStartScale; // offset 0x904, size 0x4, align 4
    float32 m_flDestScale; // offset 0x908, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x90C, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x910, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x914, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x918, size 0x4, align 255
    int32 m_nSpriteWidth; // offset 0x91C, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x920, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x924, size 0x4, align 4
};
