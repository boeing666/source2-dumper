#pragma once

class CCitadel_Modifier_MoveChessPieceVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PathParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BishopPathParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AdditionalPathParticle; // offset 0xA30, size 0xE0, align 8
    CPiecewiseCurve m_MovementCurve; // offset 0xB10, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_VerticalOffsetCurve; // offset 0xB50, size 0x40, align 8
    CPiecewiseCurve m_LeanCurve; // offset 0xB90, size 0x40, align 8
    bool m_bDebug; // offset 0xBD0, size 0x1, align 1
    bool m_bMoveOnRightTriangle; // offset 0xBD1, size 0x1, align 1
    bool m_bMoveOnDiagonal; // offset 0xBD2, size 0x1, align 1
    bool m_bImmuneDuringMove; // offset 0xBD3, size 0x1, align 1
    bool m_bTryToGroundDuring; // offset 0xBD4, size 0x1, align 1
    char _pad_0BD5[0x3]; // offset 0xBD5
    CSoundEventName m_strLandingSound; // offset 0xBD8, size 0x10, align 8 | MPropertyStartGroup
};
