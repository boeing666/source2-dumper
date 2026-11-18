#pragma once

class C_OP_GameDecalRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1CB8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    CGlobalSymbol m_sDecalGroupName; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    EventTypeSelection_t m_nEventType; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0234[0x4]; // offset 0x234
    ParticleCollisionMask_t m_nInteractionMask; // offset 0x238, size 0x8, align 8 | MPropertyFriendlyName
    ParticleCollisionGroup_t m_nCollisionGroup; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0244[0x4]; // offset 0x244
    CPerParticleVecInput m_vecStartPos; // offset 0x248, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecEndPos; // offset 0x920, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTraceBloat; // offset 0xFF8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDecalSize; // offset 0x1170, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_nDecalGroupIndex; // offset 0x12E8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flDecalRotation; // offset 0x1460, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vModulationColor; // offset 0x15D8, size 0x6D8, align 8 | MPropertyFriendlyName
    bool m_bUseGameDefaultDecalSize; // offset 0x1CB0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomDecalRotation; // offset 0x1CB1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomlySelectDecalInGroup; // offset 0x1CB2, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNoDecalsOnOwner; // offset 0x1CB3, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bVisualizeTraces; // offset 0x1CB4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1CB5[0x3]; // offset 0x1CB5
};
