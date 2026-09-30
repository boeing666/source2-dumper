#pragma once

class C_INIT_CreateWithinCone : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerAngle; // offset 0x250, size 0x178, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOuterAngle; // offset 0x3C8, size 0x178, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flSpeed; // offset 0x540, size 0x178, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOffset; // offset 0x6B8, size 0x178, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    bool m_bCollapseOffset; // offset 0x830, size 0x1, align 1 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_0831[0x3]; // offset 0x831
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x834, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_083C[0x4]; // offset 0x83C
};
