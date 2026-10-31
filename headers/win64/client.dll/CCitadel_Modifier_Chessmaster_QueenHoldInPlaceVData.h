#pragma once

class CCitadel_Modifier_Chessmaster_QueenHoldInPlaceVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    bool m_bDoCheckmate; // offset 0x878, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0879[0x3]; // offset 0x879
    float32 m_flRiseHeight; // offset 0x87C, size 0x4, align 4
    CPiecewiseCurve m_flSlamCurve; // offset 0x880, size 0x40, align 8
    CSoundEventName m_strImpactSound; // offset 0x8C0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LiftParticle; // offset 0x8D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x9B0, size 0xE0, align 8
};
