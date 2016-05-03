#
# \brief  Portions of base library shared by core and non-core processes
# \author Norman Feske
# \date   2013-02-14
#

LIBS += cxx

SRC_CC += avl_tree.cc
SRC_CC += slab.cc
SRC_CC += allocator_avl.cc
SRC_CC += heap.cc sliced_heap.cc
SRC_CC += console.cc
SRC_CC += child.cc
SRC_CC += child_process.cc
SRC_CC += elf_binary.cc
SRC_CC += ipc.cc
SRC_CC += lock.cc
SRC_CC += rpc_entrypoint.cc
SRC_CC += signal.cc signal_common.cc
SRC_CC += sleep.cc
SRC_CC += entrypoint.cc
SRC_CC += component.cc
SRC_CC += region_map_client.cc
SRC_CC += rm_session_client.cc
SRC_CC += stack_allocator.cc
SRC_CC += trace.cc

INC_DIR += $(REP_DIR)/src/include $(BASE_DIR)/src/include

vpath %.cc  $(REP_DIR)/src/lib/base
vpath %.cc $(BASE_DIR)/src/lib/base