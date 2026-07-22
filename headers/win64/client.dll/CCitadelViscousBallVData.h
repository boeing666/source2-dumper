#pragma once

class CCitadelViscousBallVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flPhysicsRadius; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
};
