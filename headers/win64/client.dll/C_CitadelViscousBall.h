#pragma once

class C_CitadelViscousBall : public CCitadelModelEntity /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xBB8, size 0x4, align 4
    char _pad_0BBC[0xC]; // offset 0xBBC
};
