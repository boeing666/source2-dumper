#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xB78, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xB80, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xB84, size 0x1, align 255
    char _pad_0B85[0x3]; // offset 0xB85
    float32 m_flSpriteFramerate; // offset 0xB88, size 0x4, align 4
    float32 m_flFrame; // offset 0xB8C, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xB90, size 0x4, align 255
    char _pad_0B94[0xC]; // offset 0xB94
    uint32 m_nBrightness; // offset 0xBA0, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xBA4, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xBA8, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xBAC, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    float32 m_flGlowProxySize; // offset 0xBB4, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xBB8, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xBBC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xBC0, size 0x4, align 4
    float32 m_flStartScale; // offset 0xBC4, size 0x4, align 4
    float32 m_flDestScale; // offset 0xBC8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xBCC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xBD0, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xBD4, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xBD8, size 0x4, align 255
    char _pad_0BDC[0xC]; // offset 0xBDC
    int32 m_nSpriteWidth; // offset 0xBE8, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
};
