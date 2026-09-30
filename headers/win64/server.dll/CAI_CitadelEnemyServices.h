#pragma once

class CAI_CitadelEnemyServices : public CAI_EnemyServices /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x78]; // offset 0x0
    bool m_bEnemyChoiceDirty; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x3]; // offset 0x79
    float32 m_flSeenGracePeriod; // offset 0x7C, size 0x4, align 4
};
