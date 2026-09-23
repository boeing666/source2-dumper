#pragma once

class CSprite : public CBaseModelEntity /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xB30, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedToEntity; // offset 0xB38, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xB3C, size 0x1, align 255
    char _pad_0B3D[0x3]; // offset 0xB3D
    float32 m_flSpriteFramerate; // offset 0xB40, size 0x4, align 4
    float32 m_flFrame; // offset 0xB44, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xB48, size 0x4, align 255
    char _pad_0B4C[0xC]; // offset 0xB4C
    uint32 m_nBrightness; // offset 0xB58, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xB5C, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xB60, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xB64, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xB68, size 0x1, align 1
    char _pad_0B69[0x3]; // offset 0xB69
    float32 m_flGlowProxySize; // offset 0xB6C, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xB70, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xB74, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xB78, size 0x4, align 4
    float32 m_flStartScale; // offset 0xB7C, size 0x4, align 4
    float32 m_flDestScale; // offset 0xB80, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xB84, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xB88, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xB8C, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xB90, size 0x4, align 255
    int32 m_nSpriteWidth; // offset 0xB94, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xB98, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xB9C, size 0x4, align 4
};
