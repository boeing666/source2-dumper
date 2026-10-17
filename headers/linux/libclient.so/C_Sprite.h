#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xD80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0xD00, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0xD08, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0xD0C, size 0x1, align 255
    char _pad_0D0D[0x3]; // offset 0xD0D
    float32 m_flSpriteFramerate; // offset 0xD10, size 0x4, align 4
    float32 m_flFrame; // offset 0xD14, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0xD18, size 0x4, align 255
    char _pad_0D1C[0xC]; // offset 0xD1C
    uint32 m_nBrightness; // offset 0xD28, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0xD2C, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0xD30, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0xD34, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0xD38, size 0x1, align 1
    char _pad_0D39[0x3]; // offset 0xD39
    float32 m_flGlowProxySize; // offset 0xD3C, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xD40, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0xD44, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0xD48, size 0x4, align 4
    float32 m_flStartScale; // offset 0xD4C, size 0x4, align 4
    float32 m_flDestScale; // offset 0xD50, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0xD54, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xD58, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xD5C, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xD60, size 0x4, align 255
    char _pad_0D64[0xC]; // offset 0xD64
    int32 m_nSpriteWidth; // offset 0xD70, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xD74, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0xD78, size 0x4, align 4
    char _pad_0D7C[0x4]; // offset 0xD7C
};
