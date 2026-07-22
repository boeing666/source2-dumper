#pragma once

class CRigidBodyWeight  // sizeof 0x10, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    float32 m_flWeight; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
