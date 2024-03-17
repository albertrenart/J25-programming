public Book findBookByTitle(String title){
        for (int i = 0; i < library.length ;i ++) {
            if(library[i].getTitle().equals(title)) {
                return library[i];
            }            
        }
        return null;
    }
