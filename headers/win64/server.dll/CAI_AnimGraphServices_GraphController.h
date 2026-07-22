#pragma once

class CAI_AnimGraphServices_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x2C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeType; // offset 0x90, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeTypeShared; // offset 0xC0, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bTaskHandshakeRestart; // offset 0xF0, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeType; // offset 0x118, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeTypeShared; // offset 0x148, size 0x30, align 8
    CAnimGraphParamRef< bool > m_bMovementHandshakeRestart; // offset 0x178, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sNavLinkType; // offset 0x1A0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sNavLinkTypeShared; // offset 0x1D0, size 0x30, align 8
    CAnimGraphParamRef< Vector > m_vecHitDirection; // offset 0x200, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flHitHeading; // offset 0x228, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vecHitOffset; // offset 0x250, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flHitStrength; // offset 0x278, size 0x28, align 8
    CAnimGraphParamRef< int32 > m_nHitBone; // offset 0x2A0, size 0x28, align 8
};
