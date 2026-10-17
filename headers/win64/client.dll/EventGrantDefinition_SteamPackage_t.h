#pragma once

struct EventGrantDefinition_SteamPackage_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_unPackageID; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_strPackageName; // offset 0x10, size 0x8, align 8
    CUtlString m_strPackageDescription; // offset 0x18, size 0x8, align 8
    CUtlString m_strPackageImage; // offset 0x20, size 0x8, align 8
};
