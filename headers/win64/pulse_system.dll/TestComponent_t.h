#pragma once

struct TestComponent_t  // sizeof 0x10, align 0xFF [vtable] (pulse_system)
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_ComponentData; // offset 0x8, size 0x8, align 8
};
