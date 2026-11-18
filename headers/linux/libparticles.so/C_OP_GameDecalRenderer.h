#pragma once

class C_OP_GameDecalRenderer : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1C18, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CGlobalSymbol m_sDecalGroupName; // offset 0x220, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    EventTypeSelection_t m_nEventType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
    ParticleCollisionMask_t m_nInteractionMask; // offset 0x230, size 0x8, align 8 | MPropertyFriendlyName
    ParticleCollisionGroup_t m_nCollisionGroup; // offset 0x238, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_023C[0x4]; // offset 0x23C
    CPerParticleVecInput m_vecStartPos; // offset 0x240, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecEndPos; // offset 0x8F0, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTraceBloat; // offset 0xFA0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDecalSize; // offset 0x1110, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_nDecalGroupIndex; // offset 0x1280, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flDecalRotation; // offset 0x13F0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vModulationColor; // offset 0x1560, size 0x6B0, align 8 | MPropertyFriendlyName
    bool m_bUseGameDefaultDecalSize; // offset 0x1C10, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomDecalRotation; // offset 0x1C11, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomlySelectDecalInGroup; // offset 0x1C12, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNoDecalsOnOwner; // offset 0x1C13, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bVisualizeTraces; // offset 0x1C14, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1C15[0x3]; // offset 0x1C15
};
