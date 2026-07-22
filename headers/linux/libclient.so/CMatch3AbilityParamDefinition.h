#pragma once

class CMatch3AbilityParamDefinition  // sizeof 0x100, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString name; // offset 0x0, size 0x8, align 8
    float32 value; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString str; // offset 0x10, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > resource; // offset 0x18, size 0xE0, align 8
    CUtlString desc; // offset 0xF8, size 0x8, align 8
};
