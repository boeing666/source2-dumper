#pragma once

class CSurvivorsEntity  // sizeof 0x28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    SurvivorsPhysicsBodyID_t m_unPhysicsBodyID; // offset 0x10, size 0x4, align 255
    char _pad_0014[0x14]; // offset 0x14
};
