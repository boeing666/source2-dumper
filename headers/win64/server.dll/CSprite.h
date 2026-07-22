#pragma once

class CSprite : public CBaseModelEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSpriteMaterial; // offset 0x780, size 0x8, align 8 | MNetworkEnable
    CHandle< CBaseEntity > m_hAttachedToEntity; // offset 0x788, size 0x4, align 4 | MNetworkEnable
    AttachmentHandle_t m_nAttachment; // offset 0x78C, size 0x1, align 255 | MNetworkEnable
    char _pad_078D[0x3]; // offset 0x78D
    float32 m_flSpriteFramerate; // offset 0x790, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flFrame; // offset 0x794, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    GameTime_t m_flDieTime; // offset 0x798, size 0x4, align 255
    char _pad_079C[0xC]; // offset 0x79C
    uint32 m_nBrightness; // offset 0x7A8, size 0x4, align 4 | MNetworkEnable
    float32 m_flBrightnessDuration; // offset 0x7AC, size 0x4, align 4 | MNetworkEnable
    float32 m_flSpriteScale; // offset 0x7B0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flScaleDuration; // offset 0x7B4, size 0x4, align 4 | MNetworkEnable
    bool m_bWorldSpaceScale; // offset 0x7B8, size 0x1, align 1 | MNetworkEnable
    char _pad_07B9[0x3]; // offset 0x7B9
    float32 m_flGlowProxySize; // offset 0x7BC, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flHDRColorScale; // offset 0x7C0, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flLastTime; // offset 0x7C4, size 0x4, align 255
    float32 m_flMaxFrame; // offset 0x7C8, size 0x4, align 4
    float32 m_flStartScale; // offset 0x7CC, size 0x4, align 4
    float32 m_flDestScale; // offset 0x7D0, size 0x4, align 4
    GameTime_t m_flScaleTimeStart; // offset 0x7D4, size 0x4, align 255
    int32 m_nStartBrightness; // offset 0x7D8, size 0x4, align 4
    int32 m_nDestBrightness; // offset 0x7DC, size 0x4, align 4
    GameTime_t m_flBrightnessTimeStart; // offset 0x7E0, size 0x4, align 255
    int32 m_nSpriteWidth; // offset 0x7E4, size 0x4, align 4 | MNotSaved
    int32 m_nSpriteHeight; // offset 0x7E8, size 0x4, align 4 | MNotSaved
    char _pad_07EC[0x4]; // offset 0x7EC
};
