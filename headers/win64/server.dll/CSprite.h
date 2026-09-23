#pragma once

class CSprite : public CBaseModelEntity /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x850, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedToEntity; // offset 0x858, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0x85C, size 0x1, align 255
    char _pad_085D[0x3]; // offset 0x85D
    float32 m_flSpriteFramerate; // offset 0x860, size 0x4, align 4
    float32 m_flFrame; // offset 0x864, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0x868, size 0x4, align 255
    char _pad_086C[0xC]; // offset 0x86C
    uint32 m_nBrightness; // offset 0x878, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0x87C, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0x880, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0x884, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x3]; // offset 0x889
    float32 m_flGlowProxySize; // offset 0x88C, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x890, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0x894, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x898, size 0x4, align 4
    float32 m_flStartScale; // offset 0x89C, size 0x4, align 4
    float32 m_flDestScale; // offset 0x8A0, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x8A4, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x8A8, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x8AC, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x8B0, size 0x4, align 255
    int32 m_nSpriteWidth; // offset 0x8B4, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x8B8, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x8BC, size 0x4, align 4
};
