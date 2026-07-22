#pragma once

class C_OP_TimeVaryingForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    float32 m_flStartLerpTime; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_StartingForce; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    float32 m_flEndLerpTime; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_EndingForce; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01FC[0x4]; // offset 0x1FC
};
