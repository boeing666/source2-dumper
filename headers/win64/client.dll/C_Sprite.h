#pragma once

class C_Sprite : public C_BaseModelEntity /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x9A8, size 0x8, align 8 | MNetworkEnable
    CHandle< C_BaseEntity > m_hAttachedToEntity; // offset 0x9B0, size 0x4, align 4 | MNetworkEnable
    AttachmentHandle_t m_nAttachment; // offset 0x9B4, size 0x1, align 255 | MNetworkEnable
    char _pad_09B5[0x3]; // offset 0x9B5
    float32 m_flSpriteFramerate; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flFrame; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    GameTime_t m_flDieTime; // offset 0x9C0, size 0x4, align 255
    char _pad_09C4[0xC]; // offset 0x9C4
    uint32 m_nBrightness; // offset 0x9D0, size 0x4, align 4 | MNetworkEnable
    float32 m_flBrightnessDuration; // offset 0x9D4, size 0x4, align 4 | MNetworkEnable
    float32 m_flSpriteScale; // offset 0x9D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flScaleDuration; // offset 0x9DC, size 0x4, align 4 | MNetworkEnable
    bool m_bWorldSpaceScale; // offset 0x9E0, size 0x1, align 1 | MNetworkEnable
    char _pad_09E1[0x3]; // offset 0x9E1
    float32 m_flGlowProxySize; // offset 0x9E4, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flHDRColorScale; // offset 0x9E8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flLastTime; // offset 0x9EC, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x9F0, size 0x4, align 4
    float32 m_flStartScale; // offset 0x9F4, size 0x4, align 4
    float32 m_flDestScale; // offset 0x9F8, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x9FC, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0xA00, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0xA04, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0xA08, size 0x4, align 255
    char _pad_0A0C[0xC]; // offset 0xA0C
    int32 m_nSpriteWidth; // offset 0xA18, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0xA1C, size 0x4, align 4 | MNotSaved
};
