#pragma once

class CSprite : public CBaseModelEntity /*0x0*/  // sizeof 0xAC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xA58, size 0x8, align 8
    CHandle< CBaseEntity > m_hAttachedToEntity; // offset 0xA60, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xA64, size 0x1, align 255
    char _pad_0A65[0x3]; // offset 0xA65
    float32 m_flSpriteFramerate; // offset 0xA68, size 0x4, align 4
    float32 m_flFrame; // offset 0xA6C, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xA70, size 0x4, align 255
    char _pad_0A74[0xC]; // offset 0xA74
    uint32 m_nBrightness; // offset 0xA80, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xA84, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xA88, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xA8C, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x3]; // offset 0xA91
    float32 m_flGlowProxySize; // offset 0xA94, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xA98, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xA9C, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xAA0, size 0x4, align 4
    float32 m_flStartScale; // offset 0xAA4, size 0x4, align 4
    float32 m_flDestScale; // offset 0xAA8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xAAC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xAB0, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xAB4, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xAB8, size 0x4, align 255
    int32 m_nSpriteWidth; // offset 0xABC, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xAC0, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xAC4, size 0x4, align 4
};
