#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x1020, size 0x8, align 8
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0x1028, size 0x4, align 4
    AttachmentHandle_t m_nAttachment; // offset 0x102C, size 0x1, align 255
    char _pad_102D[0x3]; // offset 0x102D
    float32 m_flSpriteFramerate; // offset 0x1030, size 0x4, align 4
    float32 m_flFrame; // offset 0x1034, size 0x4, align 4
    GameTime_t m_flDieTime; // offset 0x1038, size 0x4, align 255
    char _pad_103C[0xC]; // offset 0x103C
    uint32 m_nBrightness; // offset 0x1048, size 0x4, align 4
    float32 m_flBrightnessDuration; // offset 0x104C, size 0x4, align 4
    float32 m_flSpriteScale; // offset 0x1050, size 0x4, align 4
    float32 m_flScaleDuration; // offset 0x1054, size 0x4, align 4
    bool m_bWorldSpaceScale; // offset 0x1058, size 0x1, align 1
    char _pad_1059[0x3]; // offset 0x1059
    float32 m_flGlowProxySize; // offset 0x105C, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x1060, size 0x4, align 4
    GameTime_t m_flLastTime; // offset 0x1064, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x1068, size 0x4, align 4
    float32 m_flStartScale; // offset 0x106C, size 0x4, align 4
    float32 m_flDestScale; // offset 0x1070, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x1074, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x1078, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x107C, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x1080, size 0x4, align 255
    char _pad_1084[0xC]; // offset 0x1084
    int32 m_nSpriteWidth; // offset 0x1090, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x1094, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x1098, size 0x4, align 4
    char _pad_109C[0x4]; // offset 0x109C
};
