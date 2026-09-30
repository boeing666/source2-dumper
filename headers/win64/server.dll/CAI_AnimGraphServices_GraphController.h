#pragma once

class CAI_AnimGraphServices_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x368, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeType; // offset 0xC0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeTypeShared; // offset 0xF0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_eTaskHandshakeRestart; // offset 0x120, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sTaskHandshakeBodySectionDesired; // offset 0x150, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeType; // offset 0x180, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeTypeShared; // offset 0x1B0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_eMovementHandshakeRestart; // offset 0x1E0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementHandshakeBodySectionDesired; // offset 0x210, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sNavLinkType; // offset 0x240, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sNavLinkTypeShared; // offset 0x270, size 0x30, align 8
    CAnimGraphParamRef< Vector > m_vecHitDirection; // offset 0x2A0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flHitHeading; // offset 0x2C8, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vecHitOffset; // offset 0x2F0, size 0x28, align 8
    CAnimGraphParamRef< float32 > m_flHitStrength; // offset 0x318, size 0x28, align 8
    CAnimGraphParamRef< int32 > m_nHitBone; // offset 0x340, size 0x28, align 8
};
