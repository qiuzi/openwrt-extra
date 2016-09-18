/* ifslinux/config.h.  Generated from config.h.in by configure.  */
/* ifslinux/config.h.in.  Generated from configure.in by autoheader.  */

/* Define to 1 if you have the <config/exportfs.h> header file. */
/* #undef HAVE_CONFIG_EXPORTFS_H */

/* int (*direct_IO)(int, struct inode *, struct kiobuf *, unsigned long, int);
   */
#define HAVE_DECL_ASO_DIRECTIO_V1 0

/* ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov, loff_t
   offset, unsigned long nr_segs); */
#define HAVE_DECL_ASO_DIRECTIO_V2 1

/* void (*invalidatepage) (struct page *, unsigned long); */
#define HAVE_DECL_ASO_INVALIDATEPAGE_V1 0

/* void (*invalidatepage) (struct page *, unsigned int, unsigned int); */
#define HAVE_DECL_ASO_INVALIDATEPAGE_V2 1

/* int (*writepage)(struct page *); */
#define HAVE_DECL_ASO_WRITEPAGE_V1 0

/* int (*writepage)(struct page *page, struct writeback_control *wbc); */
#define HAVE_DECL_ASO_WRITEPAGE_V2 1

/* Define to 1 if you have the declaration of `bdev_hardsect_size', and to 0
   if you don't. */
#define HAVE_DECL_BDEV_HARDSECT_SIZE 0

/* Define to 1 if you have the declaration of `bdev_logical_block_size', and
   to 0 if you don't. */
#define HAVE_DECL_BDEV_LOGICAL_BLOCK_SIZE 1

/* int (bio_end_io_t) (struct bio *, unsigned int, int); */
#define HAVE_DECL_BIO_END_V1 0

/* void (bio_end_io_t) (struct bio *, int); */
#define HAVE_DECL_BIO_END_V2 1

/* int blkdev_issue_flush(struct block_device *, sector_t *); */
#define HAVE_DECL_BLKDEV_ISSUE_FLUSH_V1 0

/* int blkdev_issue_flush(struct block_device *, gfp_t, sector_t *, unsigned
   long); */
#define HAVE_DECL_BLKDEV_ISSUE_FLUSH_V2 0

/* int blkdev_issue_flush(struct block_device *, gfp_t, sector_t *); */
#define HAVE_DECL_BLKDEV_ISSUE_FLUSH_V3 1

/* Define to 1 if you have the declaration of `blkdev_issue_zeroout', and to 0
   if you don't. */
#define HAVE_DECL_BLKDEV_ISSUE_ZEROOUT 1

/* Define to 1 if you have the declaration of `blk_run_address_space', and to
   0 if you don't. */
#define HAVE_DECL_BLK_RUN_ADDRESS_SPACE 0

/* Define to 1 if you have the declaration of `blk_start_plug', and to 0 if
   you don't. */
#define HAVE_DECL_BLK_START_PLUG 1

/* ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb, struct
   inode *inode, struct block_device *bdev, const struct iovec *iov, loff_t
   offset, unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io);
   */
#define HAVE_DECL_BLOCKDEV_DIRECT_IO_V1 0

/* ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
   const struct iovec *iov, loff_t offset, unsigned long nr_segs, get_block_t
   get_block); */
#define HAVE_DECL_BLOCKDEV_DIRECT_IO_V2 0
#define HAVE_DECL_BLOCKDEV_DIRECT_IO_V3 1

/* Define to 1 if you have the declaration of `block_read_full_page', and to 0
   if you don't. */
#define HAVE_DECL_BLOCK_READ_FULL_PAGE 1

/* block_write_begin(fsdata); */
#define HAVE_DECL_BLOCK_WRITE_BEGIN_V1 0

/* block_write_begin(NULL); */
#define HAVE_DECL_BLOCK_WRITE_BEGIN_V2 1

/* Define to 1 if you have the declaration of `block_write_full_page', and to
   0 if you don't. */
#define HAVE_DECL_BLOCK_WRITE_FULL_PAGE 1

/* int (*bmap)(struct address_space *, long); */
#define HAVE_DECL_BMAP_V1 0

/* sector_t (*bmap)(struct address_space *, sector_t); */
#define HAVE_DECL_BMAP_V2 1

/* Define to 1 if you have the declaration of `clear_inode', and to 0 if you
   don't. */
#define HAVE_DECL_CLEAR_INODE 1

/* Define to 1 if you have the declaration of `cont_write_begin', and to 0 if
   you don't. */
#define HAVE_DECL_CONT_WRITE_BEGIN 1

/* Define to 1 if you have the declaration of `copy_page', and to 0 if you
   don't. */
#define HAVE_DECL_COPY_PAGE 1

/* Define to 1 if you have the declaration of `CURRENT_TIME', and to 0 if you
   don't. */
#define HAVE_DECL_CURRENT_TIME 1

/* Define to 1 if you have the declaration of `current_umask', and to 0 if you
   don't. */
#define HAVE_DECL_CURRENT_UMASK 1

/* int (*d_compare)(struct dentry *, struct qstr*, struct qstr*); */
#define HAVE_DECL_DCOMPARE_V1 0

/* int (*d_compare)(const struct dentry *, const struct inode *, const struct
   dentry *, const struct inode *, unsigned int, const char *, const struct
   qstr *); */
#define HAVE_DECL_DCOMPARE_V2 0

/* int (*d_compare)(const struct dentry *, const struct dentry *, unsigned
   int, const char *, const struct qstr *); */
#define HAVE_DECL_DCOMPARE_V3 1

/* Define to 1 if you have the declaration of `DECLARE_FSTYPE_DEV', and to 0
   if you don't. */
#define HAVE_DECL_DECLARE_FSTYPE_DEV 0

/* int (*d_hash)(struct dentry *, int); */
#define HAVE_DECL_DHASH_V1 0

/* int (*d_hash)(const struct dentry *, const struct inode*, struct nameidata
   *); */
#define HAVE_DECL_DHASH_V2 0

/* int (*d_hash)(const struct dentry *, struct qstr *); */
#define HAVE_DECL_DHASH_V3 1

/* Define to 1 if you have the declaration of `do_sync_read', and to 0 if you
   don't. */
#define HAVE_DECL_DO_SYNC_READ 1

/* Define to 1 if you have the declaration of `do_sync_write', and to 0 if you
   don't. */
#define HAVE_DECL_DO_SYNC_WRITE 1

/* Define to 1 if you have the declaration of `drop_nlink', and to 0 if you
   don't. */
#define HAVE_DECL_DROP_NLINK 1

/* Define to 1 if you have the declaration of `d_alloc_anon', and to 0 if you
   don't. */
#define HAVE_DECL_D_ALLOC_ANON 0

/* Define to 1 if you have the declaration of `d_make_root', and to 0 if you
   don't. */
#define HAVE_DECL_D_MAKE_ROOT 1

/* Define to 1 if you have the declaration of `d_obtain_alias', and to 0 if
   you don't. */
#define HAVE_DECL_D_OBTAIN_ALIAS 1

/* char * d_path(struct dentry *, struct vfsmount *, char *, int); */
#define HAVE_DECL_D_PATH_V1 0

/* char *d_path(const struct path *, char *, int); */
#define HAVE_DECL_D_PATH_V2 1

/* Define to 1 if you have the declaration of `d_splice_alias', and to 0 if
   you don't. */
#define HAVE_DECL_D_SPLICE_ALIAS 1

/* int (*encode_fh)(struct inode *inode, __u32 *fh, int *max_len, int
   connectable); */
#define HAVE_DECL_ENCODE_FH_V1 0

/* int (*encode_fh)(struct inode *inode, __u32 *fh, int *max_len, struct inode
   *parent); */
#define HAVE_DECL_ENCODE_FH_V2 1

/* Define to 1 if you have the declaration of `end_writeback', and to 0 if you
   don't. */
#define HAVE_DECL_END_WRITEBACK 0

/* Define to 1 if you have the declaration of `EXPORT_NO_SYMBOLS', and to 0 if
   you don't. */
#define HAVE_DECL_EXPORT_NO_SYMBOLS 0

/* Define to 1 if you have the declaration of `file_inode', and to 0 if you
   don't. */
#define HAVE_DECL_FILE_INODE 1

/* ssize_t (*aio_write) (struct kiocb *, const char __user *, size_t, loff_t);
   */
#define HAVE_DECL_FO_AIO_WRITE_V1 0

/* ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long,
   loff_t); */
#define HAVE_DECL_FO_AIO_WRITE_V2 1

/* int (*statfs) (struct super_block *, struct statfs *); */
/* #undef HAVE_DECL_FST_GETSB_V1 */

/* int (*statfs) (struct dentry *, struct kstatfs *); */
/* #undef HAVE_DECL_FST_GETSB_V2 */

/* Define to 1 if you have the declaration of `generic_file_fsync', and to 0
   if you don't. */
#define HAVE_DECL_GENERIC_FILE_FSYNC 1

/* Define to 1 if you have the declaration of `generic_file_read', and to 0 if
   you don't. */
#define HAVE_DECL_GENERIC_FILE_READ 0

/* Define to 1 if you have the declaration of `generic_file_sendfile', and to
   0 if you don't. */
#define HAVE_DECL_GENERIC_FILE_SENDFILE 0

/* Define to 1 if you have the declaration of `generic_file_splice_read', and
   to 0 if you don't. */
#define HAVE_DECL_GENERIC_FILE_SPLICE_READ 1

/* Define to 1 if you have the declaration of `generic_file_splice_write', and
   to 0 if you don't. */
#define HAVE_DECL_GENERIC_FILE_SPLICE_WRITE 1

/* Define to 1 if you have the declaration of `generic_file_write', and to 0
   if you don't. */
#define HAVE_DECL_GENERIC_FILE_WRITE 0

/* int generic_permission(struct inode *, int, int (*check_acl)(struct inode
   *, int, unsigned int)); */
#define HAVE_DECL_GENERIC_PERMISSION_V1 0

/* int generic_permission(struct inode *, int, unsigned int, int
   (*check_acl)(struct inode *, int, unsigned int)); */
#define HAVE_DECL_GENERIC_PERMISSION_V2 0

/* int generic_permission(struct inode *, int); */
#define HAVE_DECL_GENERIC_PERMISSION_V3 1

/* int generic_permission(struct inode *, int, int (*check_acl)(struct inode
   *, int)); */
#define HAVE_DECL_GENERIC_PERMISSION_V4 0

/* Define to 1 if you have the declaration of `get_hardsect_size', and to 0 if
   you don't. */
#define HAVE_DECL_GET_HARDSECT_SIZE 0

/* Define to 1 if you have the declaration of `iget4', and to 0 if you don't.
   */
#define HAVE_DECL_IGET4 0

/* Define to 1 if you have the declaration of `inc_nlink', and to 0 if you
   don't. */
#define HAVE_DECL_INC_NLINK 1

/* Define to 1 if you have the declaration of `inode_dec_link_count', and to 0
   if you don't. */
#define HAVE_DECL_INODE_DEC_LINK_COUNT 1

/* Define to 1 if you have the declaration of `inode_init_once', and to 0 if
   you don't. */
#define HAVE_DECL_INODE_INIT_ONCE 1

/* int (*create) (struct inode *,struct dentry *,int); */
#define HAVE_DECL_INOP_CREATE_V1 0

/* int (*create) (struct inode *,struct dentry *,int, struct nameidata *); */
#define HAVE_DECL_INOP_CREATE_V2 0

/* int (*create) (struct inode *,struct dentry *,umode_t,struct nameidata *);
   */
#define HAVE_DECL_INOP_CREATE_V3 0

/* int (*create) (struct inode *,struct dentry *, umode_t, bool); */
#define HAVE_DECL_INOP_CREATE_V4 1

/* struct dentry * (*lookup) (struct inode *,struct dentry *); */
#define HAVE_DECL_INOP_LOOKUP_V1 0

/* struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata
   *); */
#define HAVE_DECL_INOP_LOOKUP_V2 0

/* struct dentry * (*lookup) (struct inode *,struct dentry *, unsigned int);
   */
#define HAVE_DECL_INOP_LOOKUP_V3 1

/* int (*permission) (struct inode *,int,struct nameidata*); */
#define HAVE_DECL_INOP_PERMISSION_V1 0

/* int (*permission) (struct inode *,int,unsigned int); */
#define HAVE_DECL_INOP_PERMISSION_V2 0

/* int (*permission) (struct inode *, int); */
#define HAVE_DECL_INOP_PERMISSION_V3 1

/* void invalidate_bdev(struct block_device *bdev); */
#define HAVE_DECL_INVALIDATE_BDEV_V1 1

/* void invalidate_bdev(struct block_device *bdev,long); */
#define HAVE_DECL_INVALIDATE_BDEV_V2 0

/* Define to 1 if you have the declaration of `i_size_read', and to 0 if you
   don't. */
#define HAVE_DECL_I_SIZE_READ 1

/* Define to 1 if you have the declaration of `i_size_write', and to 0 if you
   don't. */
#define HAVE_DECL_I_SIZE_WRITE 1

/* Define to 1 if you have the declaration of `jiffies_to_msecs', and to 0 if
   you don't. */
#define HAVE_DECL_JIFFIES_TO_MSECS 1

/* kdev_t super_block.s_dev; */
#define HAVE_DECL_KDEV_T_S_DEV 0

/* void *kmap_atomic(struct page *page, enum km_type idx); */
#define HAVE_DECL_KMAP_ATOMIC_V1 0

/* void *kmap_atomic(struct page *page); */
#define HAVE_DECL_KMAP_ATOMIC_V2 1

/* kmem_cache_t *kmem_cache_create(const char *, size_t, size_t, unsigned
   long,void (*)(void *, kmem_cache_t *, unsigned long), void (*)(void *,
   kmem_cache_t *, unsigned long)); */
#define HAVE_DECL_KMEM_CACHE_CREATE_V1 0

/* struct kmem_cache *kmem_cache_create(const char *, size_t, size_t, unsigned
   long, void (*)(void *, struct kmem_cache *, unsigned long)); */
#define HAVE_DECL_KMEM_CACHE_CREATE_V2 0

/* struct kmem_cache *kmem_cache_create(const char *, size_t, size_t, unsigned
   long, void (*)(struct kmem_cache *, void *)); */
#define HAVE_DECL_KMEM_CACHE_CREATE_V3 0

/* struct kmem_cache *kmem_cache_create(const char *, size_t, size_t, unsigned
   long, void (*)(void *)); */
#define HAVE_DECL_KMEM_CACHE_CREATE_V4 1

/* Define to 1 if you have the declaration of `kmem_cache_zalloc', and to 0 if
   you don't. */
#define HAVE_DECL_KMEM_CACHE_ZALLOC 1

/* Define to 1 if you have the declaration of `kstatfs', and to 0 if you
   don't. */
#define HAVE_DECL_KSTATFS 0

/* mode type is mode_t */
/* #undef HAVE_DECL_MODE_TYPE_MODE_T */

/* mode type is umode_t */
/* #undef HAVE_DECL_MODE_TYPE_UMODE_T */

/* Define to 1 if you have the declaration of `mpage_readpage', and to 0 if
   you don't. */
#define HAVE_DECL_MPAGE_READPAGE 1

/* Define to 1 if you have the declaration of `mpage_readpages', and to 0 if
   you don't. */
#define HAVE_DECL_MPAGE_READPAGES 1

/* Define to 1 if you have the declaration of `mpage_writepages', and to 0 if
   you don't. */
#define HAVE_DECL_MPAGE_WRITEPAGES 1

/* Define to 1 if you have the declaration of `nd_set_link', and to 0 if you
   don't. */
#define HAVE_DECL_ND_SET_LINK 1

/* void page_put_link(struct dentry *, struct nameidata *, void *); */
#define HAVE_DECL_PAGE_PUT_LINK_V1 1

/* Define to 1 if you have the declaration of `PDE_DATA', and to 0 if you
   don't. */
#define HAVE_DECL_PDE_DATA 1

/* Define to 1 if you have the declaration of `posix_acl_chmod', and to 0 if
   you don't. */
/* #undef HAVE_DECL_POSIX_ACL_CHMOD */

/* Define to 1 if you have the declaration of `posix_acl_create', and to 0 if
   you don't. */
/* #undef HAVE_DECL_POSIX_ACL_CREATE */

/* Define to 1 if you have the declaration of `posix_acl_from_xattr', and to 0
   if you don't. */
#define HAVE_DECL_POSIX_ACL_FROM_XATTR 0

/* int posix_acl_to_xattr(struct user_namespace *user_ns,const struct
   posix_acl *acl, void *buffer, size_t size); */
#define HAVE_DECL_POSIX_ACL_TO_XATTR_V2 1

/* Define to 1 if you have the declaration of `proc_create_data', and to 0 if
   you don't. */
#define HAVE_DECL_PROC_CREATE_DATA 1

/* Define to 1 if you have the declaration of `proc_mkdir_data', and to 0 if
   you don't. */
#define HAVE_DECL_PROC_MKDIR_DATA 1

/* int (*readdir) (struct file *, void *, filldir_t); */
#define HAVE_DECL_READDIR_V1 0

/* int (*iterate) (struct file *, struct dir_context *); */
#define HAVE_DECL_READDIR_V2 1

/* Define to 1 if you have the declaration of `refrigerator', and to 0 if you
   don't. */
#define HAVE_DECL_REFRIGERATOR 0

/* Define to 1 if you have the declaration of `round_jiffies_up', and to 0 if
   you don't. */
#define HAVE_DECL_ROUND_JIFFIES_UP 1

/* Define to 1 if you have the declaration of `setattr_copy', and to 0 if you
   don't. */
#define HAVE_DECL_SETATTR_COPY 1

/* int (*setxattr) (struct dentry *, const char *,void *,size_t,int); */
#define HAVE_DECL_SETXATTR_V1 0

/* int (*setxattr) (struct dentry *, const char *,const void *,size_t,int); */
#define HAVE_DECL_SETXATTR_V2 1

/* Define to 1 if you have the declaration of `set_buffer_ordered', and to 0
   if you don't. */
#define HAVE_DECL_SET_BUFFER_ORDERED 0

/* Define to 1 if you have the declaration of `set_buffer_uptodate', and to 0
   if you don't. */
#define HAVE_DECL_SET_BUFFER_UPTODATE 1

/* Define to 1 if you have the declaration of `set_freezable', and to 0 if you
   don't. */
#define HAVE_DECL_SET_FREEZABLE 1

/* Define to 1 if you have the declaration of `set_nlink', and to 0 if you
   don't. */
#define HAVE_DECL_SET_NLINK 1

/* int (*show_options)(struct seq_file *, struct vfsmount *); */
#define HAVE_DECL_SO_SHOW_OPTIONS_V1 0

/* int (*show_options)(struct seq_file *, struct dentry *); */
#define HAVE_DECL_SO_SHOW_OPTIONS_V2 1

/* int (*statfs) (struct super_block *, struct statfs *); */
#define HAVE_DECL_SO_STATFS_V1 0

/* int (*statfs) (struct dentry *, struct kstatfs *); */
#define HAVE_DECL_SO_STATFS_V2 1

/* int (*statfs) (struct super_block *, struct statfs *); */
#define HAVE_DECL_SO_STATFS_V3 0

/* void (*write_inode) (struct inode *, int); */
#define HAVE_DECL_SO_WRITE_INODE_V1 0

/* int (*write_inode) (struct inode *, int); */
#define HAVE_DECL_SO_WRITE_INODE_V2 0

/* int (*write_inode) (struct inode *, struct writeback_control *wbc); */
#define HAVE_DECL_SO_WRITE_INODE_V3 1

/* Define to 1 if you have the declaration of `sync_blockdev', and to 0 if you
   don't. */
#define HAVE_DECL_SYNC_BLOCKDEV 1

/* Define to 1 if you have the declaration of `tag_pages_for_writeback', and
   to 0 if you don't. */
#define HAVE_DECL_TAG_PAGES_FOR_WRITEBACK 1

/* Define to 1 if you have the declaration of `timespec_compare', and to 0 if
   you don't. */
#define HAVE_DECL_TIMESPEC_COMPARE 1

/* struct timespec inode.i_atime; */
#define HAVE_DECL_TIMESPEC_I_ATIME 1

/* Define to 1 if you have the declaration of `truncate_setsize', and to 0 if
   you don't. */
#define HAVE_DECL_TRUNCATE_SETSIZE 1

/* Define to 1 if you have the declaration of `update_atime', and to 0 if you
   don't. */
#define HAVE_DECL_UPDATE_ATIME 0

/* Define to 1 if you have the declaration of `verify_area', and to 0 if you
   don't. */
#define HAVE_DECL_VERIFY_AREA 0

/* Define to 1 if you have the declaration of `vprintk', and to 0 if you
   don't. */
#define HAVE_DECL_VPRINTK 1

/* Define to 1 if you have the declaration of `wakeup_page_waiters', and to 0
   if you don't. */
#define HAVE_DECL_WAKEUP_PAGE_WAITERS 0

/* int writeback_inodes_sb_if_idle(struct super_block *); */
#define HAVE_DECL_WRITEBACK_INODES_SB_IF_IDLE_V1 0

/* int writeback_inodes_sb_if_idle(struct super_block *, enum wb_reason
   reason); */
#define HAVE_DECL_WRITEBACK_INODES_SB_IF_IDLE_V2 0

/* Define to 1 if you have the declaration of `write_dirty_buffer', and to 0
   if you don't. */
#define HAVE_DECL_WRITE_DIRTY_BUFFER 1

/* int (*get) (struct dentry*,const char*,void*,size_t,int); */
#define HAVE_DECL_XATTR_HANDLER_V2 1

/* Define to 1 if you have the declaration of `xtime', and to 0 if you don't.
   */
#define HAVE_DECL_XTIME 0

/* Define to 1 if you have the declaration of `__block_write_begin', and to 0
   if you don't. */
#define HAVE_DECL___BLOCK_WRITE_BEGIN 1

/* Define to 1 if you have the declaration of `__bread', and to 0 if you
   don't. */
#define HAVE_DECL___BREAD 1

/* Define to 1 if you have the declaration of `__breadahead', and to 0 if you
   don't. */
#define HAVE_DECL___BREADAHEAD 1

/* Define to 1 if you have the declaration of `__brelse', and to 0 if you
   don't. */
#define HAVE_DECL___BRELSE 1

/* Define to 1 if you have the declaration of `__getblk', and to 0 if you
   don't. */
#define HAVE_DECL___GETBLK 1

/* Define to 1 if you have the <generated/autoconf.h> header file. */
#define HAVE_GENERATED_AUTOCONF_H 1

/* Define to 1 if you have the <generated/compile.h> header file. */
#define HAVE_GENERATED_COMPILE_H 1

/* Define to 1 if you have the <generated/utsrelease.h> header file. */
#define HAVE_GENERATED_UTSRELEASE_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if the system has the type `struct kmem_cache'. */
#define HAVE_KMEM_CACHE 1

/* Select kmem_cache_t struct */
#define HAVE_KMEM_CACHE_NOT_DIFF 1

/* Define to 1 if the system has the type `kmem_cache_t'. */
#define HAVE_KMEM_CACHE_T 0

/* Define to 1 if you have the <linux/aio.h> header file. */
#define HAVE_LINUX_AIO_H 1

/* Define to 1 if you have the <linux/backing-dev.h> header file. */
#define HAVE_LINUX_BACKING_DEV_H 1

/* Define to 1 if you have the <linux/bio.h> header file. */
#define HAVE_LINUX_BIO_H 1

/* Define to 1 if you have the <linux/blkdev.h> header file. */
#define HAVE_LINUX_BLKDEV_H 1

/* Define to 1 if you have the <linux/blk.h> header file. */
/* #undef HAVE_LINUX_BLK_H */

/* Define to 1 if you have the <linux/buffer_head.h> header file. */
#define HAVE_LINUX_BUFFER_HEAD_H 1

/* Define to 1 if you have the <linux/dcache.h> header file. */
#define HAVE_LINUX_DCACHE_H 1

/* Define to 1 if you have the <linux/delay.h> header file. */
#define HAVE_LINUX_DELAY_H 1

/* Define to 1 if you have the <linux/exportfs.h> header file. */
#define HAVE_LINUX_EXPORTFS_H 1

/* Define to 1 if you have the <linux/freezer.h> header file. */
#define HAVE_LINUX_FREEZER_H 1

/* Define to 1 if you have the <linux/fs_struct.h> header file. */
#define HAVE_LINUX_FS_STRUCT_H 1

/* Define to 1 if you have the <linux/iobuf.h> header file. */
/* #undef HAVE_LINUX_IOBUF_H */

/* Define to 1 if you have the <linux/jiffies.h> header file. */
#define HAVE_LINUX_JIFFIES_H 1

/* Define to 1 if you have the <linux/kdev_t.h> header file. */
#define HAVE_LINUX_KDEV_T_H 1

/* Define to 1 if you have the <linux/locks.h> header file. */
/* #undef HAVE_LINUX_LOCKS_H */

/* Define to 1 if you have the <linux/mmzone.h> header file. */
#define HAVE_LINUX_MMZONE_H 1

/* Define to 1 if you have the <linux/mm.h> header file. */
#define HAVE_LINUX_MM_H 1

/* Define to 1 if you have the <linux/mm_types.h> header file. */
#define HAVE_LINUX_MM_TYPES_H 1

/* Define to 1 if you have the <linux/mpage.h> header file. */
#define HAVE_LINUX_MPAGE_H 1

/* Define to 1 if you have the <linux/mutex.h> header file. */
#define HAVE_LINUX_MUTEX_H 1

/* Define to 1 if you have the <linux/namei.h> header file. */
#define HAVE_LINUX_NAMEI_H 1

/* Define to 1 if you have the <linux/pagemap.h> header file. */
#define HAVE_LINUX_PAGEMAP_H 1

/* Define to 1 if you have the <linux/pagevec.h> header file. */
#define HAVE_LINUX_PAGEVEC_H 1

/* Define to 1 if you have the <linux/proc_ns.h> header file. */
#define HAVE_LINUX_PROC_NS_H 1

/* Define to 1 if you have the <linux/sched.h> header file. */
#define HAVE_LINUX_SCHED_H 1

/* Define to 1 if you have the <linux/seq_file.h> header file. */
#define HAVE_LINUX_SEQ_FILE_H 1

/* Define to 1 if you have the <linux/smp_lock.h> header file. */
/* #undef HAVE_LINUX_SMP_LOCK_H */

/* Define to 1 if you have the <linux/statfs.h> header file. */
#define HAVE_LINUX_STATFS_H 1

/* Define to 1 if you have the <linux/types.h> header file. */
#define HAVE_LINUX_TYPES_H 1

/* Define to 1 if you have the <linux/uio.h> header file. */
#define HAVE_LINUX_UIO_H 1

/* Define to 1 if you have the <linux/vermagic.h> header file. */
#define HAVE_LINUX_VERMAGIC_H 1

/* Define to 1 if you have the <linux/xattr.h> header file. */
#define HAVE_LINUX_XATTR_H 1

/* Define to 1 if you have the `memcmp' function. */
#define HAVE_MEMCMP 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if the system has the type `sector_t'. */
#define HAVE_SECTOR_T_KERNEL 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `error_remove_page' is member of `struct
   address_space_operations'. */
#define HAVE_STRUCT_ADDRESS_SPACE_OPERATIONS_ERROR_REMOVE_PAGE 1

/* Define to 1 if `is_partially_uptodate' is member of `struct
   address_space_operations'. */
#define HAVE_STRUCT_ADDRESS_SPACE_OPERATIONS_IS_PARTIALLY_UPTODATE 1

/* Define to 1 if `readpages' is member of `struct address_space_operations'.
   */
#define HAVE_STRUCT_ADDRESS_SPACE_OPERATIONS_READPAGES 1

/* Define to 1 if `sync_page' is member of `struct address_space_operations'.
   */
/* #undef HAVE_STRUCT_ADDRESS_SPACE_OPERATIONS_SYNC_PAGE */

/* Define to 1 if `write_begin' is member of `struct
   address_space_operations'. */
#define HAVE_STRUCT_ADDRESS_SPACE_OPERATIONS_WRITE_BEGIN 1

/* Define to 1 if `b_size' is member of `struct buffer_head'. */
#define HAVE_STRUCT_BUFFER_HEAD_B_SIZE 1

/* Define to 1 if the system has the type `struct export_operations'. */
#define HAVE_STRUCT_EXPORT_OPERATIONS 1

/* Define to 1 if `fh_to_dentry' is member of `struct export_operations'. */
#define HAVE_STRUCT_EXPORT_OPERATIONS_FH_TO_DENTRY 1

/* Define to 1 if `get_dentry' is member of `struct export_operations'. */
/* #undef HAVE_STRUCT_EXPORT_OPERATIONS_GET_DENTRY */

/* Define to 1 if `aio_read' is member of `struct file_operations'. */
#define HAVE_STRUCT_FILE_OPERATIONS_AIO_READ 1

/* Define to 1 if `aio_write' is member of `struct file_operations'. */
#define HAVE_STRUCT_FILE_OPERATIONS_AIO_WRITE 1

/* Define to 1 if `ioctl' is member of `struct file_operations'. */
/* #undef HAVE_STRUCT_FILE_OPERATIONS_IOCTL */

/* Define to 1 if `mount' is member of `struct file_system_type'. */
#define HAVE_STRUCT_FILE_SYSTEM_TYPE_MOUNT 1

/* Define to 1 if `i_acl' is member of `struct inode'. */
/* #undef HAVE_STRUCT_INODE_I_ACL */

/* Define to 1 if `i_blksize' is member of `struct inode'. */
/* #undef HAVE_STRUCT_INODE_I_BLKSIZE */

/* Define to 1 if `i_mutex' is member of `struct inode'. */
#define HAVE_STRUCT_INODE_I_MUTEX 1

/* Define to 1 if `i_private' is member of `struct inode'. */
#define HAVE_STRUCT_INODE_I_PRIVATE 1

/* Define to 1 if `fallocate' is member of `struct inode_operations'. */
/* #undef HAVE_STRUCT_INODE_OPERATIONS_FALLOCATE */

/* Define to 1 if `get_acl' is member of `struct inode_operations'. */
/* #undef HAVE_STRUCT_INODE_OPERATIONS_GET_ACL */

/* Define to 1 if `exit' is member of `struct module'. */
#define HAVE_STRUCT_MODULE_EXIT 1

/* Define to 1 if `owner' is member of `struct proc_dir_entry'. */
/* #undef HAVE_STRUCT_PROC_DIR_ENTRY_OWNER */

/* Define to 1 if `s_bdev' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_BDEV 1

/* Define to 1 if `s_bdi' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_BDI 1

/* Define to 1 if `s_d_op' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_D_OP 1

/* Define to 1 if `s_export_op' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_EXPORT_OP 1

/* Define to 1 if `s_fs_info' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_FS_INFO 1

/* Define to 1 if `s_id' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_ID 1

/* Define to 1 if `s_time_gran' is member of `struct super_block'. */
#define HAVE_STRUCT_SUPER_BLOCK_S_TIME_GRAN 1

/* Define to 1 if `alloc_inode' is member of `struct super_operations'. */
#define HAVE_STRUCT_SUPER_OPERATIONS_ALLOC_INODE 1

/* Define to 1 if `evict_inode' is member of `struct super_operations'. */
#define HAVE_STRUCT_SUPER_OPERATIONS_EVICT_INODE 1

/* Define to 1 if `read_inode2' is member of `struct super_operations'. */
/* #undef HAVE_STRUCT_SUPER_OPERATIONS_READ_INODE2 */

/* Define to 1 if `write_super' is member of `struct super_operations'. */
/* #undef HAVE_STRUCT_SUPER_OPERATIONS_WRITE_SUPER */

/* Define to 1 if `tv_sec' is member of `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC_TV_SEC 1

/* Define to 1 if `count' is member of `struct user_namespace'. */
#define HAVE_STRUCT_USER_NAMESPACE_COUNT 1

/* Define to 1 if `proc_inum' is member of `struct user_namespace'. */
#define HAVE_STRUCT_USER_NAMESPACE_PROC_INUM 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "ufsd"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ufsd lke_8.9.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ufsd"

/* Define to the version of this package. */
#define PACKAGE_VERSION "lke_8.9.0"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* EXFAT Using flag */
/* #undef UFSD_EXFAT */

/* HFS Using flag */
#define UFSD_HFS /**/

/* NTFS Using flag */
#define UFSD_NTFS /**/
