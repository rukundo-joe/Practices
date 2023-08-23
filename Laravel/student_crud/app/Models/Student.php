<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Student extends Model
{
    use HasFactory;
    protected $table = 'student_crud';
    protected $primaryKey = 'id';
    protected $fillable = ['FirstName', 'LastName', 'NickName', 'Age', 'Address', 'Hobby'];
}
