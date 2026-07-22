#pragma once

class CBaseFlex : public CBaseAnimGraph /*0x0*/  // sizeof 0xAE0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CNetworkUtlVectorBase< float32 > m_flexWeight; // offset 0xA90, size 0x18, align 8 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    VectorWS m_vLookTargetPosition; // offset 0xAA8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    char _pad_0AB4[0x24]; // offset 0xAB4
    GameTime_t m_flLastFlexAnimationTime; // offset 0xAD8, size 0x4, align 255
    char _pad_0ADC[0x4]; // offset 0xADC
};
