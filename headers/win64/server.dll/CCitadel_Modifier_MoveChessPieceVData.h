#pragma once

class CCitadel_Modifier_MoveChessPieceVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xBA8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoverParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PathParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BishopPathParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AdditionalPathParticle; // offset 0xA30, size 0xE0, align 8
    CPiecewiseCurve m_MovementCurve; // offset 0xB10, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_VerticalOffsetCurve; // offset 0xB50, size 0x40, align 8
    bool m_bDebug; // offset 0xB90, size 0x1, align 1
    bool m_bMoveOnRightTriangle; // offset 0xB91, size 0x1, align 1
    bool m_bMoveOnDiagonal; // offset 0xB92, size 0x1, align 1
    bool m_bImmuneDuringMove; // offset 0xB93, size 0x1, align 1
    bool m_bTryToGroundDuring; // offset 0xB94, size 0x1, align 1
    char _pad_0B95[0x3]; // offset 0xB95
    CSoundEventName m_strLandingSound; // offset 0xB98, size 0x10, align 8 | MPropertyStartGroup
};
