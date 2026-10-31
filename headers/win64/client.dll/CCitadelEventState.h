#pragma once

class CCitadelEventState : public C_BaseEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    C_NetworkUtlVectorBase< EEvent > m_vecActiveEvents; // offset 0x5F0, size 0x18, align 8
};
