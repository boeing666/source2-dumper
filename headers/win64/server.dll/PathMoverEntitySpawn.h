#pragma once

class PathMoverEntitySpawn  // sizeof 0x20, align 0x8 (server) {MGetKV3ClassDefaults}
{
public:
    CHandle< CFuncMover > hMover; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CHandle< CBaseEntity > > vecOtherEntities; // offset 0x8, size 0x18, align 8
};
