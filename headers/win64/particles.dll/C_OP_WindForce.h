#pragma once

class C_OP_WindForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    Vector m_vForce; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01FC[0x4]; // offset 0x1FC
};
