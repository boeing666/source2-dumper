#pragma once

class C_KeychainModule : public C_CS2WeaponModuleBase /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1188]; // offset 0x0
    uint32 m_nKeychainDefID; // offset 0x1188, size 0x4, align 4
    uint32 m_nKeychainSeed; // offset 0x118C, size 0x4, align 4
};
