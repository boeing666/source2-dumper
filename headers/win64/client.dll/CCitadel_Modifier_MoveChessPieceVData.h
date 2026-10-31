#pragma once

class CCitadel_Modifier_MoveChessPieceVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PathParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BishopPathParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AdditionalPathParticle; // offset 0xA38, size 0xE0, align 8
    CPiecewiseCurve m_MovementCurve; // offset 0xB18, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_VerticalOffsetCurve; // offset 0xB58, size 0x40, align 8
    bool m_bDebug; // offset 0xB98, size 0x1, align 1
    bool m_bMoveOnRightTriangle; // offset 0xB99, size 0x1, align 1
    bool m_bMoveOnDiagonal; // offset 0xB9A, size 0x1, align 1
    bool m_bImmuneDuringMove; // offset 0xB9B, size 0x1, align 1
    bool m_bTryToGroundDuring; // offset 0xB9C, size 0x1, align 1
    char _pad_0B9D[0x3]; // offset 0xB9D
    CSoundEventName m_strLandingSound; // offset 0xBA0, size 0x10, align 8 | MPropertyStartGroup
};
