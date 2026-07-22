#pragma once

class C_OP_WorldTraceConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nCP; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecCpOffset; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleCollisionMode_t m_nCollisionMode; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleCollisionMode_t m_nCollisionModeMin; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x1E8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0x1EC, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bWorldOnly; // offset 0x26C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bBrushOnly; // offset 0x26D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0x26E, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_026F[0x1]; // offset 0x26F
    int32 m_nIgnoreCP; // offset 0x270, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flCpMovementTolerance; // offset 0x274, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flRetestRate; // offset 0x278, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flTraceTolerance; // offset 0x27C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flCollisionConfirmationSpeed; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_nMaxTracesPerFrame; // offset 0x284, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRadiusScale; // offset 0x288, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName
    CPerParticleFloatInput m_flBounceAmount; // offset 0x3F0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSlideAmount; // offset 0x558, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRandomDirScale; // offset 0x6C0, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bDecayBounce; // offset 0x828, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bKillonContact; // offset 0x829, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_082A[0x2]; // offset 0x82A
    float32 m_flMinSpeed; // offset 0x82C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetNormal; // offset 0x830, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0831[0x3]; // offset 0x831
    ParticleAttributeIndex_t m_nStickOnCollisionField; // offset 0x834, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CPerParticleFloatInput m_flStopSpeed; // offset 0x838, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nEntityStickDataField; // offset 0x9A0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nEntityStickNormalField; // offset 0x9A4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
