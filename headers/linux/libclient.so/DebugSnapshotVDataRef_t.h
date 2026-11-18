#pragma once

struct DebugSnapshotVDataRef_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults MDebugSnapshotDataSummaryFn}
{
    CUtlString file_name; // offset 0x0, size 0x8, align 8
    CUtlString node_name; // offset 0x8, size 0x8, align 8
};
